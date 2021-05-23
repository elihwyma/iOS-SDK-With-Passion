/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseTable.h>

@class NSArray, NSString;

@interface ML3MutableDatabaseTable : ML3DatabaseTable

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *foreignKeyConstraints;

@end
