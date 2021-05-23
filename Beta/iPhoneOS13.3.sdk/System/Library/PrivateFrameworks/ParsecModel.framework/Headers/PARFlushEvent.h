/*
 Image: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
 */

#import <ParsecModel/PAREvent.h>

@interface PARFlushEvent : PAREvent

{
    int type;
}

@property (nonatomic) int type;

+ (id)fetchRequest;

@end
