/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class ACCMediaLibraryUpdateLibraryInfo, NSString;

@interface ACCMediaLibraryInfo : NSObject

{
    _Bool _state[2];
    _Bool _stateInit[2];
    NSString *_libraryUID;
    ACCMediaLibraryUpdateLibraryInfo *_info;
}

@property (nonatomic, readonly) NSString *libraryUID;
@property (nonatomic, readonly) ACCMediaLibraryUpdateLibraryInfo *info;

- (id)description;
- (id)initWithInfo:(id)arg1;
- (_Bool)getState:(int)arg1;
- (_Bool)setState:(int)arg1 value:(_Bool)arg2;

@end
