/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKAssistantPerson : NSObject

{
    NSString *_internalGUID;
    NSString *_label;
}

@property (copy, nonatomic) NSString *internalGUID;
@property (copy, nonatomic) NSString *label;

@end
