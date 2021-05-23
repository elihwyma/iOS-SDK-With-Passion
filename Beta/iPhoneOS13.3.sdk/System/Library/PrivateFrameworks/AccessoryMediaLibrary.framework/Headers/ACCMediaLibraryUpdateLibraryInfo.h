/*
 Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ACCMediaLibraryUpdateLibraryInfo : NSObject

{
    int _type;
    NSString *_mediaLibraryUID;
    NSString *_name;
}

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int type;

- (id)description;
- (_Bool)supportsSecureCoding;
- (id)initWithDict:(id)arg1;
- (id)copyDict;
- (id)initWithMediaLibrary:(id)arg1 dict:(id)arg2;
- (void)fillStruct:(CDStruct_40935082 *)arg1;
- (id)initWithMediaLibrary:(id)arg1 name:(id)arg2 type:(int)arg3;

@end
