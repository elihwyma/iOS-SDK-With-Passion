/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ML3DatabaseColumn : NSObject

{
    NSString *_name;
    unsigned long long _datatype;
    unsigned long long _columnConstraints;
    id _defaultValue;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long datatype;
@property (nonatomic, readonly) unsigned long long columnConstraints;
@property (nonatomic, readonly) id defaultValue;

+ (id)columnWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4;

- (id)description;
- (id)initWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4;
- (id)_columnDefinitionSQL;

@end
