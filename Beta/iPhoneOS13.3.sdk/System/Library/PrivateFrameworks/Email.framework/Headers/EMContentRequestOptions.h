/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSString;

@interface EMContentRequestOptions : NSObject <Swift>

{
    _Bool _includeSuggestionItems;
    NSString *_requestedRepresentation;
    long long _networkUsage;
}

@property (copy, nonatomic) NSString *requestedRepresentation;
@property (nonatomic) long long networkUsage;
@property (nonatomic, readonly) _Bool includeSuggestionItems;

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(_Bool)arg3;

- (id)init;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(_Bool)arg3;

@end
