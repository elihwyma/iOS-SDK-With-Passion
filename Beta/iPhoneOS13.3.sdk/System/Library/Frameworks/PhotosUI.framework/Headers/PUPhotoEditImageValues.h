/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoEditImageValues : NSObject

{
    _Bool _complete;
    NSDictionary *_smartToneStatistics;
    NSDictionary *_primarySmartToneStatistics;
    NSDictionary *_overcaptureSmartToneStatistics;
    NSDictionary *_smartColorStatistics;
    double _smartToneAutoSuggestion;
    double _smartColorAutoSuggestion;
    NSDictionary *_autoCropValues;
    NSDictionary *_autoPerspectiveValues;
    NSDictionary *_portraitValues;
    NSDictionary *_apertureValues;
}

@property (copy) NSDictionary *smartToneStatistics;
@property (copy) NSDictionary *primarySmartToneStatistics;
@property (copy) NSDictionary *overcaptureSmartToneStatistics;
@property (copy) NSDictionary *smartColorStatistics;
@property double smartToneAutoSuggestion;
@property double smartColorAutoSuggestion;
@property (copy) NSDictionary *autoCropValues;
@property (copy) NSDictionary *autoPerspectiveValues;
@property (copy) NSDictionary *portraitValues;
@property (copy) NSDictionary *apertureValues;
@property (getter=isComplete) _Bool complete;

@end
