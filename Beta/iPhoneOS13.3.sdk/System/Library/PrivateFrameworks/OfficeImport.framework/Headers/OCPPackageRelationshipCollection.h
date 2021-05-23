/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationshipCollection : NSObject

{
    NSMutableDictionary *mIdentifierMap;
    NSMutableDictionary *mTypeMap;
}

- (id)relationshipsByType:(id)arg1;
- (id)relationshipForIdentifier:(id)arg1;
- (id)initWithRelationshipsXml:(struct _xmlDoc *)arg1 baseLocation:(id)arg2;

@end
