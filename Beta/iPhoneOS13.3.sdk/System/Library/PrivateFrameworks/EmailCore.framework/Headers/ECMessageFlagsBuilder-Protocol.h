/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@protocol ECMessageFlagsBuilder

@property (nonatomic) _Bool read;
@property (nonatomic) _Bool deleted;
@property (nonatomic) _Bool replied;
@property (nonatomic) _Bool flagged;
@property (nonatomic) _Bool draft;
@property (nonatomic) _Bool forwarded;
@property (nonatomic) _Bool redirected;
@property (nonatomic) _Bool junkLevelSetByUser;
@property (nonatomic) unsigned long long junkLevel;
@property (nonatomic) unsigned long long flagColor;

@end
