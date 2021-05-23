/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject

{
    OCPPackagePart *mStylesPart;
    NSString *mDefaultStyleId;
    NSMutableDictionary *mCache;
}

- (id)init;
- (struct _xmlNode *)styleNodeForId:(id)arg1;
- (void)setStylesPart:(id)arg1;
- (id)defaultStyleId;
- (void)setDefaultStyleId:(id)arg1;
- (void)setStyleNode:(struct _xmlNode *)arg1 forId:(id)arg2;
- (struct _xmlNode *)defaultStyleNode;

@end
