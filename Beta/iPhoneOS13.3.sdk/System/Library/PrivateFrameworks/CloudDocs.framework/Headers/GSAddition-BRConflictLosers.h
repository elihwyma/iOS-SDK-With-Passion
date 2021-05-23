/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <GenerationalStorage/GSAddition.h>

@class NSPersonNameComponents, NSString;

@interface GSAddition (BRConflictLosers)

@property (nonatomic, readonly) NSString *br_lastEditorDeviceName;
@property (nonatomic, readonly) NSString *br_lastEditorName;
@property (nonatomic, readonly) NSPersonNameComponents *br_lastEditorNameComponents;

- (_Bool)br_markResolvedWithError:(id *)arg1;
- (_Bool)_br_markResolvedWithError:(id *)arg1;

@end
