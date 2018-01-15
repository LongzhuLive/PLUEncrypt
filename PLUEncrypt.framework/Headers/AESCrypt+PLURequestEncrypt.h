//
//  AESCrypt+PLURequestEncrypt.h
//  PLUEncrypt
//
//  Created by ziya on 2017/4/6.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <PLUFoundation/PLUFoundation.h>

#import "PLUEncrypt.h"

@interface AESCrypt (PLURequestEncrypt)

+ (NSString *)pluRequestEncryptString:(NSString *)string key:(NSData *)key;

+ (NSData *)pluRequestDecryptBase64String:(NSString *)string key:(NSString *)key;

@end
