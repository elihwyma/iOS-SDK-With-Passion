/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _SSVPlayActivityEndpointRevisionInformation : NSObject

{
    NSIndexSet *_additionalPendingRevisionsIndexSet;
    unsigned long long _currentRevision;
    NSString *_revisionVersionToken;
}

@property (copy, nonatomic) NSIndexSet *additionalPendingRevisionsIndexSet;
@property (nonatomic) unsigned long long currentRevision;
@property (copy, nonatomic) NSString *revisionVersionToken;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
