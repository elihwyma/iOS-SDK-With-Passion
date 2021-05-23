/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL, OCPPackage, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackagePart : NSObject

{
    NSURL *mLocation;
    OCPPackageRelationshipCollection *mRelationships;
    struct _xmlDoc *mDocument;
    NSMutableDictionary *mAlternateContentMap;
    OCPPackage *mPackage;
}

@property (weak, readonly) OCPPackage *package;

- (void)dealloc;
- (id)data;
- (id)contentType;
- (id)location;
- (struct _xmlDoc *)xmlDocument;
- (struct _xmlTextReader *)xmlReader;
- (void)copyToFile:(id)arg1;
- (id)relationshipsByType:(id)arg1;
- (id)relationshipForIdentifier:(id)arg1;
- (struct _xmlNode *)fallbackNodeForChoiceNode:(struct _xmlNode *)arg1;
- (void)setFallbackNode:(struct _xmlNode *)arg1 forChoiceNode:(struct _xmlNode *)arg2;
- (id)initWithLocation:(id)arg1 relationshipsXml:(struct _xmlDoc *)arg2 package:(id)arg3;
- (id)firstPartWithRelationshipOfType:(id)arg1;

@end
