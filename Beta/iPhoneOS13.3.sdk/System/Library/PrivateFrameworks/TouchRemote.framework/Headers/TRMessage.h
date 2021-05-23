/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TRMessage : NSObject

{
    NSDictionary *_userInfo;
}

@property (retain, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
