/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject

{
    _Bool _transient;
    Class _relationshipModelClass;
    struct ModelPropertyBase *_foreignPropertyBase;
    CDUnknownBlockType _validRelationshipHandler;
    shared_ptr_217a6612 _relationshipValidationProperties;
}

@property (nonatomic) Class relationshipModelClass;
@property (nonatomic) _Bool transient;
@property (nonatomic) struct ModelPropertyBase *foreignPropertyBase;
@property (nonatomic) shared_ptr_217a6612 relationshipValidationProperties;
@property (copy, nonatomic) CDUnknownBlockType validRelationshipHandler;
@property (nonatomic, readonly) MPMediaLibraryEntityTranslator *entityTranslator;

- (id).cxx_construct;

@end
