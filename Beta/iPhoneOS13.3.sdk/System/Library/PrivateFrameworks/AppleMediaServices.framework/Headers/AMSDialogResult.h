/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSDialogRequest, NSArray, NSMutableDictionary, NSString;

@interface AMSDialogResult : NSObject

{
    AMSDialogRequest *_originalRequest;
    NSString *_selectedActionIdentifier;
    NSArray *_textfieldValues;
    NSMutableDictionary *_userInfo;
}

@property (nonatomic, readonly) AMSDialogRequest *originalRequest;
@property (copy, nonatomic) NSString *selectedActionIdentifier;
@property (copy, nonatomic) NSArray *textfieldValues;
@property (copy, nonatomic) NSMutableDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 selectedActionIdentifier:(id)arg2;

@end
