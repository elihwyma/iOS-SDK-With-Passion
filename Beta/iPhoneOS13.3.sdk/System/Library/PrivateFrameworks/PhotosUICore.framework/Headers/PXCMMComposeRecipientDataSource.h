/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface PXCMMComposeRecipientDataSource : NSObject

{
    NSArray *_composeRecipients;
    NSSet *_recipients;
}

@property (copy, nonatomic) NSSet *recipients;
@property (copy, nonatomic, readonly) NSArray *composeRecipients;

+ (id)new;

- (id)init;
- (id)initWithComposeRecipients:(id)arg1 recipients:(id)arg2;
- (unsigned long long)indexOfComposeRecipientForRecipient:(id)arg1;

@end
