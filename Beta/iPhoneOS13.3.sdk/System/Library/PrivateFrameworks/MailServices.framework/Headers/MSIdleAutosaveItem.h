/*
 Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MSIdleAutosaveItem : NSObject

{
    NSString *_autosaveIdentifier;
    NSString *_subject;
}

@property (copy, nonatomic, readonly) NSString *autosaveIdentifier;
@property (copy, nonatomic, readonly) NSString *subject;

+ (_Bool)supportsSecureCoding;
+ (id)withAutosaveIdentifier:(id)arg1 subject:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAutosaveIdentifier:(id)arg1 subject:(id)arg2;

@end
