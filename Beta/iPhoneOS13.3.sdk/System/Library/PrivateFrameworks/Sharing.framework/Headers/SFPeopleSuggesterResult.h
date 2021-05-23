/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SFPeopleSuggesterResult : NSObject

{
    unsigned int _flags;
    NSString *_contactID;
    NSArray *_handles;
    NSString *_sendersKnownAlias;
}

@property (copy, nonatomic) NSString *contactID;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *sendersKnownAlias;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
