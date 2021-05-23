/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ICInAppMessageEventEntry : NSObject <Swift>

{
    NSString *_messageIdentifier;
    NSDictionary *_params;
    NSString *_eventIdentifier;
}

@property (nonatomic, readonly) NSString *messageIdentifier;
@property (nonatomic, readonly) NSDictionary *params;
@property (nonatomic, readonly) NSString *eventIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageIdentifier:(id)arg1 params:(id)arg2;
- (id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 eventIdentifier:(id)arg3;

@end
