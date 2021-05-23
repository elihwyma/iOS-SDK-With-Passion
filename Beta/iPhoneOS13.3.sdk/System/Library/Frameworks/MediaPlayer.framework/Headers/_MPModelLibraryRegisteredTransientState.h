/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPSectionedCollection, NSUUID;

@interface _MPModelLibraryRegisteredTransientState : NSObject

{
    long long _addState;
    long long _keepLocalState;
    MPSectionedCollection *_modelObjects;
    MPSectionedCollection *_relatedModelObjects;
    NSUUID *_token;
}

@property (nonatomic) long long addState;
@property (nonatomic) long long keepLocalState;
@property (copy, nonatomic) MPSectionedCollection *modelObjects;
@property (copy, nonatomic) MPSectionedCollection *relatedModelObjects;
@property (copy, nonatomic) NSUUID *token;

@end
