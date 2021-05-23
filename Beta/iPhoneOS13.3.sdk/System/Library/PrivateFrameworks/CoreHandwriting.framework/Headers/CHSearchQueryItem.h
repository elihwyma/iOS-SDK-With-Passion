/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface CHSearchQueryItem : NSObject

{
    NSSet *_strokeIdentifiers;
}

@property (copy, nonatomic, readonly) NSSet *strokeIdentifiers;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStrokeIdentifiers:(id)arg1;
- (_Bool)isEqualToSearchQueryItem:(id)arg1;

@end
