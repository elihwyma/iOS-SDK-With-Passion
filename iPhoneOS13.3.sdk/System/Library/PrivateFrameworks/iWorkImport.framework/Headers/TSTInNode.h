//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

__attribute__((visibility("hidden")))
@interface TSTInNode : TSTExpressionNode
{
}

+ (id)inString;
- (void)saveToArchive:(struct InNodeArchive )arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct InNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)formulaPlainText;
- (struct TSCEFunctionArgSpec )argumentSpec;
- (id)string;
- (int)tokenType;

@end

