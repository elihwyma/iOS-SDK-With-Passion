/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject

{
    NSSet *_stringProperties;
}

@property (retain, nonatomic) NSSet *stringProperties;
@property (nonatomic, readonly) _Bool supportsPropertySearch;

+ (id)searchSetWithProperties:(id)arg1;

- (id)initWithStringProperties:(id)arg1;
- (_Bool)supportsWellKnownType:(int)arg1;
- (_Bool)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)initWithSearchProperties:(id)arg1;
- (_Bool)isEqualToPropertySet:(id)arg1;

@end
