/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordID, NSString;

@interface CKReference : NSObject

{
    unsigned long long _referenceAction;
    CKRecordID *_recordID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CKRecordID *recordID;
@property (nonatomic, readonly) unsigned long long referenceAction;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithRecord:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2;
- (id)_initBare;

@end
