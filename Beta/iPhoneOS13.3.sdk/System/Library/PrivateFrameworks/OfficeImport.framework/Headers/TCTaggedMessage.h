/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCTaggedMessage : NSObject

{
    int mMessageTag;
    NSString *mMessageText;
}

@property (nonatomic, readonly) int messageTag;
@property (copy, nonatomic, readonly) NSString *messageText;

+ (id)taggedMessageWithMessageText:(id)arg1;

- (id)initWithMessageText:(id)arg1;

@end
