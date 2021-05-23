/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICAppearanceInfo : NSObject

{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) _Bool isDark;

+ (id)appearanceInfoWithType:(unsigned long long)arg1;
+ (void)enumerateAppearanceTypesUsingBlock:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
