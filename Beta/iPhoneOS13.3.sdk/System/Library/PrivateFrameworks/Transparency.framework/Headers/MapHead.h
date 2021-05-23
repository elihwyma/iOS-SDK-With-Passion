/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class LogHead, NSData;

@interface MapHead

@property (nonatomic) unsigned long long logBeginningMs;
@property (copy, nonatomic) NSData *mapHeadHash;
@property (nonatomic) int application;
@property (retain, nonatomic) LogHead *changeLogHead;
@property (nonatomic) _Bool hasChangeLogHead;
@property (nonatomic) unsigned long long revision;
@property (nonatomic) int mapType;
@property (nonatomic) unsigned long long treeId;

+ (id)descriptor;

@end
