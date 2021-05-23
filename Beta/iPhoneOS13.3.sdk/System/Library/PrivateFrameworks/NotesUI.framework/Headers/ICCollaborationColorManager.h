/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ICCollaborationColorManager : NSObject

{
    NSMutableDictionary *_userIDToColorsDict;
    NSMutableArray *_colorUsageCounts;
    unsigned long long _colorUsageCountMinimum;
}

@property (retain, nonatomic) NSMutableDictionary *userIDToColorsDict;
@property (retain, nonatomic) NSMutableArray *colorUsageCounts;
@property (nonatomic) unsigned long long colorUsageCountMinimum;

+ (id)participantColors;

- (id)init;
- (struct UIColor *)highlightColorForUserID:(id)arg1 withPercentage:(double)arg2 forNote:(id)arg3 darkAppearance:(_Bool)arg4;
- (id)containerScopedUserRecordNameForAccount:(id)arg1;
- (id)baseColorValuesForUserID:(id)arg1;
- (id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2;

@end
