/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationResult.h>

@class CKQueryCursor;

@interface CKQueryOperationResult : CKOperationResult

{
    CKQueryCursor *_cursor;
}

@property (retain, nonatomic) CKQueryCursor *cursor;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end
