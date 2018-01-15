//
//  PLUEncryptServer.h
//  PLUEncrypt
//
//  Created by ziya on 2017/4/5.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PLUEncryptResult.h"

@interface PLUEncryptServer : NSObject

+ (instancetype _Nonnull)server;

- (void)setEncryptVersion:(NSString  * _Nonnull)version;

- (void)requestEncrypt:(NSString * _Nonnull)orignStr result:(void (^_Nonnull)(BOOL success, NSDictionary * _Nullable encryptedDic))result;

- (NSString *_Nullable)decryptStr:(NSString *_Nonnull)str token:(NSString *_Nonnull)token;

@end
