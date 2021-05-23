/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseTable.h>

@class NSArray;

@interface ML3ItemExtraTable : ML3DatabaseTable

{
    NSArray *_columns;
}

- (id)name;
- (id)columns;

@end
