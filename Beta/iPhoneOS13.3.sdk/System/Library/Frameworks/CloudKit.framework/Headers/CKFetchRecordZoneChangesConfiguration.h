/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesConfiguration : NSObject

{
    _Bool _fetchNewestChangesFirst;
    _Bool _fetchChangesMadeByThisDevice;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
}

@property (nonatomic) _Bool fetchNewestChangesFirst;
@property (nonatomic) _Bool fetchChangesMadeByThisDevice;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end
