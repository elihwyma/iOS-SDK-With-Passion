/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <KeyboardServices/_KSFileEntry.h>

@class NSArray, NSMutableDictionary;

@interface _KSFileDirectory : _KSFileEntry

{
    NSMutableDictionary *_contents;
}

@property (retain, nonatomic, readonly) NSArray *contents;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)consistencyCheck;
- (void)removeEntryWithName:(id)arg1;
- (id)entryForName:(id)arg1;
- (void)restoreToPath:(id)arg1;
- (void)performOnEverything:(CDUnknownBlockType)arg1;
- (id)initWithDirectory:(id)arg1 captureContents:(_Bool)arg2 storeRoot:(_Bool)arg3;
- (id)findEntryWithComparison:(CDUnknownBlockType)arg1 recursively:(_Bool)arg2;

@end
