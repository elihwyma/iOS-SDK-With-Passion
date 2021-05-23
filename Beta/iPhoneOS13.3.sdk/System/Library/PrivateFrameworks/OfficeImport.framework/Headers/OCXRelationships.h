/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OCXRelationships : NSObject

{
    NSString *mPath;
    NSMutableArray *mRelationships;
    NSMutableDictionary *mRelationshipMap;
    unsigned long long mNextId;
}

- (_Bool)isEmpty;
- (id)path;
- (id)initWithPath:(id)arg1;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(_Bool)arg4;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3;
- (id)idForKey:(id)arg1;
- (id)targetForKey:(id)arg1;
- (void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2;

@end
