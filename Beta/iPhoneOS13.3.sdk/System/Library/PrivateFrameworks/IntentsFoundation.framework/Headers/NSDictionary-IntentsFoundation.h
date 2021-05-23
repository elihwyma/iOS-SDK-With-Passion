/*
 Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
 */

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (IntentsFoundation)

@property (copy, nonatomic, readonly) NSString *if_JSONStringRepresentation;

- (id)if_dictionaryWithNonEmptyValues;
- (id)if_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)if_compactMap:(CDUnknownBlockType)arg1;

@end
