/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SUICAtomIndexed : NSObject

{
    long long _editOperation;
    unsigned long long _indexToEdit;
    unsigned long long _indexInArrayB;
    NSString *_replacementText;
}

@property (nonatomic) long long editOperation;
@property (nonatomic) unsigned long long indexToEdit;
@property (nonatomic) unsigned long long indexInArrayB;
@property (retain, nonatomic) NSString *replacementText;

+ (id)atomWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;

- (id)description;
- (id)initWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;

@end
