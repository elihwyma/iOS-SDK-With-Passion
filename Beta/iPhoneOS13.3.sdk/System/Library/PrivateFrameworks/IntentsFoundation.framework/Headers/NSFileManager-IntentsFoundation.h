/*
 Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (IntentsFoundation)

- (_Bool)if_setBool:(_Bool)arg1 forExtendedAttributeNamed:(id)arg2 ofItemAtURL:(id)arg3;
- (_Bool)if_setAuditToken:(CDStruct_6ad76789)arg1 forExtendedAttributeNamed:(id)arg2 ofItemAtURL:(id)arg3;
- (CDStruct_6ad76789)if_auditTokenForExtendedAttributeNamed:(id)arg1 ofItemAtURL:(id)arg2;
- (_Bool)if_boolForExtendedAttributeName:(id)arg1 ofItemAtURL:(id)arg2;

@end
