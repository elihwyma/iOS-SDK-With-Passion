/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKServerChangeToken;

@interface CKFetchArchivedRecordsOptions : NSObject

{
    CKServerChangeToken *_previousServerChangeToken;
}

@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
