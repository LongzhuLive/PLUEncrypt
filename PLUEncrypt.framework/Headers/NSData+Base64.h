//
//  NSData+Base64.h
//  Gurpartap Singh
//
//  Created by Gurpartap Singh on 06/05/12.
//  Copyright (c) 2012 Gurpartap Singh. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface NSData (Base64)

+ (NSData *)base64DataFromString:(NSString *)string;

@end