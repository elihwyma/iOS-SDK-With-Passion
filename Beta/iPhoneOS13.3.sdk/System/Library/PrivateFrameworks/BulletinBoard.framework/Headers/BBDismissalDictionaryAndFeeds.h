/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBDismissalItem.h>

@class NSString;

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem

{
    double _dismissalTimeInterval;
    NSString *_dismissalHash;
}

@property (nonatomic, readonly) double dismissalTimeInterval;
@property (copy, nonatomic, readonly) NSString *dismissalHash;

- (id)description;
- (id)initWithDismissalDictionary:(id)arg1 andFeeds:(unsigned long long)arg2;
- (_Bool)matchDismissalDictionary:(id)arg1;

@end
