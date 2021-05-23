/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFSerializableContentProvider : NSObject

{
    NSMutableDictionary *_entriesForClassNames;
}

@property (nonatomic, readonly) NSMutableDictionary *entriesForClassNames;

+ (id)sharedProvider;

- (id)init;
- (id)serializedRepresentationForObject:(id)arg1;
- (id)objectOfClass:(Class)arg1 withSerializedRepresentation:(id)arg2;
- (id)entryConsideringSuperclassesForClass:(Class)arg1;
- (void)registerSerializableContentClasses;

@end
