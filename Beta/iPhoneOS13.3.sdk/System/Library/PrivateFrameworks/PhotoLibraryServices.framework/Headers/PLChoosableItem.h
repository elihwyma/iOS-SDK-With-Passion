/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLChoosableItem : NSObject

{
    int _type;
    long long _width;
    long long _height;
    NSString *_uniformTypeIdentifier;
}

@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;

+ (id)choosableItemsFromCloudResources:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4;
- (id)initWithCloudResource:(id)arg1;
- (_Bool)isEqualToChoosableItem:(id)arg1;
- (long long)compareUsingWidth:(id)arg1;

@end
