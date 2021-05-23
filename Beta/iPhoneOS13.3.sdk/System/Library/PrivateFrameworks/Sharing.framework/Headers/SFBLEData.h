/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SFBLEData : NSObject

{
    NSData *_data;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
