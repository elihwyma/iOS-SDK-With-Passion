/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PXSearchRecentSearch : NSObject

{
    NSString *_searchText;
    NSArray *_representedObjects;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *searchText;
@property (nonatomic, readonly) NSArray *representedObjects;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_isSupportedRepresentedObjects:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryForArchiving;
- (id)initWithRepresentedObjects:(id)arg1 searchText:(id)arg2;

@end
