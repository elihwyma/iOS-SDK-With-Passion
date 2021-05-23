/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface NSObject (CKPropertiesDescription)

+ (id)CKSQLiteClassName;

- (id)CKDescription;
- (id)CKPropertiesDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKPropertiesDescriptionStringFromProperties:(id)arg1;
- (id)CKStatusReport;
- (id)hashedDescription;
- (void)CKAssignToContainerWithID:(id)arg1;

@end
