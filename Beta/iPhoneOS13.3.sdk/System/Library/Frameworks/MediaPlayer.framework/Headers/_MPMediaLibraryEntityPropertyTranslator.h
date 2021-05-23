/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface _MPMediaLibraryEntityPropertyTranslator : NSObject

{
    CDUnknownBlockType _sortTransformer;
    CDUnknownBlockType _valueTransformer;
    shared_ptr_217a6612 _propertiesToFetchMap;
    shared_ptr_217a6612 _propertiesToSortMap;
}

@property (nonatomic) shared_ptr_217a6612 propertiesToFetchMap;
@property (nonatomic) shared_ptr_217a6612 propertiesToSortMap;
@property (copy, nonatomic) CDUnknownBlockType sortTransformer;
@property (copy, nonatomic) CDUnknownBlockType valueTransformer;

- (id).cxx_construct;

@end
