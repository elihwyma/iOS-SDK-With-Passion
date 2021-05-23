/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme, OCDDocument;

__attribute__((visibility("hidden")))
@interface CMState : NSObject

{
    OCDDocument *_document;
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    NSString *mResourceUrlPrefix;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
    id mResources;
    unsigned long long mSourceFormat;
    _Bool mIsThumbnail;
    _Bool mIsOnPhone;
    long long _textLevel;
}

@property (retain) OADColorMap *colorMap;
@property (retain) OADColorScheme *colorScheme;
@property (retain) id resources;
@property (retain) OCDDocument *document;
@property unsigned long long sourceFormat;
@property _Bool isThumbnail;
@property _Bool isOnPhone;

- (id)init;
- (long long)textLevel;
- (void)pushTextLevel;
- (void)popTextLevel;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (id)getHtmlResource;
- (void)setHtmlResource:(id)arg1;
- (id)resourceUrlPrefix;
- (id)componentByName:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (void)setResourceUrlPrefix:(id)arg1;
- (_Bool)isOffice12;

@end
