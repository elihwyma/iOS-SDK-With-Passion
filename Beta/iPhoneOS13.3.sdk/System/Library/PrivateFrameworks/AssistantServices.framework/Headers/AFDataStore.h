/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AFDataStore : NSObject

{
    NSMutableDictionary *_entries;
}

- (id)init;
- (id)initWithEntries:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)setImageData:(id)arg1 forKey:(id)arg2;
- (id)imageDataForKey:(id)arg1;

@end
