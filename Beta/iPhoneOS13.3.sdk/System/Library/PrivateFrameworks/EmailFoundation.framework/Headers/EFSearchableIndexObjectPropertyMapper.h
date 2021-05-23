/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface EFSearchableIndexObjectPropertyMapper : NSObject

{
    NSDictionary *_children;
    NSArray *_attributes;
}

@property (nonatomic, readonly) NSArray *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *children;

- (id)initWithAttributes:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (id)initWithChildren:(id)arg1 attributes:(id)arg2;
- (id)childForKey:(id)arg1;

@end
