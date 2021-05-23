/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

#import <BusinessChat/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface BCAuthenticationLabels : NSObject <Swift>

{
    NSString *_title;
    NSString *_subtitle;
    NSString *_action;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *action;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 action:(id)arg3;

@end
