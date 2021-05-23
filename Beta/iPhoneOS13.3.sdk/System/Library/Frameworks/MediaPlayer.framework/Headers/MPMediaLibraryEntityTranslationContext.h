/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibrary, MPModelKind, NSArray, NSString;

@interface MPMediaLibraryEntityTranslationContext : NSObject

{
    _Bool _multiQuery;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedEntityIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    MPModelKind *_modelKind;
    NSString *_personID;
}

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSArray *allowedEntityIdentifiers;
@property (retain, nonatomic) NSArray *scopedContainers;
@property (nonatomic, getter=isMultiQuery) _Bool multiQuery;
@property (nonatomic) unsigned long long filteringOptions;
@property (retain, nonatomic) MPModelKind *modelKind;
@property (retain, nonatomic) NSString *personID;

@end
