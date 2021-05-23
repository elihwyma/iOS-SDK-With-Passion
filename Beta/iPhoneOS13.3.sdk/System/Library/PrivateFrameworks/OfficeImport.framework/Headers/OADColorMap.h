/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : NSObject

{
    NSMutableDictionary *mMappings;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEmpty;
- (void)addDefaultMappings:(_Bool)arg1;
- (void)addMapping:(int)arg1 index:(int)arg2;
- (int)mappingForIndex:(int)arg1;

@end
