/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSArray.h>

@class NSString;

@interface NSArray (CKPropertiesDescription)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1;

@end
