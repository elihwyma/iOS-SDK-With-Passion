/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface SFMessageSessionRequestEntry : NSObject

{
    _Bool _allowUnencrypted;
    CDUnknownBlockType _handler;
    NSDictionary *_options;
}

@property (nonatomic) _Bool allowUnencrypted;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) NSDictionary *options;

@end
