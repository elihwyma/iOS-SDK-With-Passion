/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface CPLEngineScope : NSObject

{
    NSString *_scopeIdentifier;
    long long _scopeType;
    NSDate *_creationDate;
    long long _localIndex;
    long long _cloudIndex;
    long long _stableIndex;
}

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) long long localIndex;
@property (nonatomic) long long cloudIndex;
@property (nonatomic) long long stableIndex;
@property (nonatomic, readonly) NSString *scopeIdentifier;
@property (nonatomic, readonly) long long scopeType;

+ (_Bool)supportsSecureCoding;
+ (id)separatorForStatusKey:(id)arg1;
+ (void)formatStatusDictionary:(id)arg1 forScopeWithIdentifier:(id)arg2 appendString:(CDUnknownBlockType)arg3 appendTopLevelStatus:(CDUnknownBlockType)arg4 appendLineStatus:(CDUnknownBlockType)arg5;

- (id)description;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)statusDescription;
- (id)initWithScopeIdentifier:(id)arg1 scopeType:(long long)arg2;

@end
