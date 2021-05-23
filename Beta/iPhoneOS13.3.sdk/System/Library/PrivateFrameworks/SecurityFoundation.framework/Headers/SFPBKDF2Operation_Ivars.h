/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSData;

@protocol SFPseudoRandomFunction;

@interface SFPBKDF2Operation_Ivars : NSObject

{
    long long iterationCount;
    id <SFPseudoRandomFunction> pseudoRandomFunction;
    NSData *salt;
}

@end
